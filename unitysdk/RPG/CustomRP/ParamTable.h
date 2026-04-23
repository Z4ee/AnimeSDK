#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CUSTOMRP_PARAMTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x22B9590)
#define RPG_CUSTOMRP_PARAMTABLE_DIFF_OFFSET UNITYSDK_OFFSET(0x22B9670)
#define RPG_CUSTOMRP_PARAMTABLE_DUMP_OFFSET UNITYSDK_OFFSET(0x22B9600)
#define RPG_CUSTOMRP_PARAMTABLE_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x22B9560)
#define RPG_CUSTOMRP_PARAMTABLE_NEW_OFFSET UNITYSDK_OFFSET(0x18144EF0)
#define RPG_CUSTOMRP_PARAMTABLE_OUTPUTASDIFF_OFFSET UNITYSDK_OFFSET(0x22B9610)
#define RPG_CUSTOMRP_PARAMTABLE_SETPARAM_OFFSET UNITYSDK_OFFSET(0x22B94E0)
#define RPG_CUSTOMRP_PARAMTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22B9620)
#define RPG_CUSTOMRP_PARAMTABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x22B9550)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ParamTable_TypeDefinitionIndex = 35294;

	struct alignas(8) ParamTable
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _Params; // 0x10

		static ::RPG::CustomRP::ParamTable New()
		{
			return ((::RPG::CustomRP::ParamTable(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_NEW_OFFSET))();
		}

		::System::Void SetParam(::System::String* name, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_SETPARAM_OFFSET))(this, name, value);
		}

		::System::Void Update(::RPG::CustomRP::ParamTable param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::ParamTable))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_UPDATE_OFFSET))(this, param);
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

		::System::Void Diff(::RPG::CustomRP::ParamTable& rhs, ::RPG::CustomRP::ParamTable& diff_this, ::RPG::CustomRP::ParamTable& diff_rhs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::ParamTable&, ::RPG::CustomRP::ParamTable&, ::RPG::CustomRP::ParamTable&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PARAMTABLE_DIFF_OFFSET))(this, rhs, diff_this, diff_rhs);
		}
	};
}
