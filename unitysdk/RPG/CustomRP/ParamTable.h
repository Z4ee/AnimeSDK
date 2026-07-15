#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CUSTOMRP_PARAMTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x3946D30)
#define RPG_CUSTOMRP_PARAMTABLE_DIFF_OFFSET UNITYSDK_OFFSET(0x3946DD0)
#define RPG_CUSTOMRP_PARAMTABLE_DUMP_OFFSET UNITYSDK_OFFSET(0x3946D90)
#define RPG_CUSTOMRP_PARAMTABLE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x3946D00)
#define RPG_CUSTOMRP_PARAMTABLE_NEW_OFFSET UNITYSDK_OFFSET(0x16BF1050)
#define RPG_CUSTOMRP_PARAMTABLE_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x3946DA0)
#define RPG_CUSTOMRP_PARAMTABLE_SETPARAM_OFFSET UNITYSDK_OFFSET(0x3946C80)
#define RPG_CUSTOMRP_PARAMTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3946DB0)
#define RPG_CUSTOMRP_PARAMTABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x3946CF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ParamTable_TypeDefinitionIndex = 36376;

	struct alignas(8) ParamTable
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _Params; // 0x10

		static ::RPG::CustomRP::ParamTable New()
		{
			return ((::RPG::CustomRP::ParamTable(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_NEW_OFFSET))();
		}

		::System::Void SetParam(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_SETPARAM_OFFSET))(this, a1, a2);
		}

		::System::Void Update(::RPG::CustomRP::ParamTable a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::ParamTable))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_UPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_GET_EMPTY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_CLEAR_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JObject* Dump()
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_DUMP_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* OutputAsDiff()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_OUTPUTASDIFF_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_TOSTRING_OFFSET))(this);
		}

		::System::Void Diff(::RPG::CustomRP::ParamTable& a1, ::RPG::CustomRP::ParamTable& a2, ::RPG::CustomRP::ParamTable& a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::ParamTable&, ::RPG::CustomRP::ParamTable&, ::RPG::CustomRP::ParamTable&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_DIFF_OFFSET))(this, a1, a2, a3);
		}
	};
}
