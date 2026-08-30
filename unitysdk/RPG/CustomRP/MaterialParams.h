#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ParamTable.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CUSTOMRP_MATERIALPARAMS_CLEAR_OFFSET UNITYSDK_OFFSET(0x3AE1500)
#define RPG_CUSTOMRP_MATERIALPARAMS_DIFF_OFFSET UNITYSDK_OFFSET(0x3AE1600)
#define RPG_CUSTOMRP_MATERIALPARAMS_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x3AE15C0)
#define RPG_CUSTOMRP_MATERIALPARAMS_NEW_OFFSET UNITYSDK_OFFSET(0x185807B0)
#define RPG_CUSTOMRP_MATERIALPARAMS_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x3AE1650)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialParams_TypeDefinitionIndex = 37238;

	struct alignas(8) MaterialParams
	{
		::RPG::CustomRP::ParamTable param; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* keywords; // 0x18

		static ::RPG::CustomRP::MaterialParams New()
		{
			return ((::RPG::CustomRP::MaterialParams(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALPARAMS_NEW_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALPARAMS_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALPARAMS_GET_EMPTY_OFFSET))(this);
		}

		::System::Void Diff(::RPG::CustomRP::MaterialParams& a1, ::RPG::CustomRP::MaterialParams& a2, ::RPG::CustomRP::MaterialParams& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialParams&, ::RPG::CustomRP::MaterialParams&, ::RPG::CustomRP::MaterialParams&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALPARAMS_DIFF_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_MATERIALPARAMS_OUTPUTASDIFF_OFFSET))(this);
		}
	};
}
