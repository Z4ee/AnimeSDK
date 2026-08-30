#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_8A0744A5CDB04F6F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162DBA30)
#define CLASS_1_8A0744A5CDB04F6F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162DBA70)
#define CLASS_1_8A0744A5CDB04F6F___C__GETSHEETVALUES_B__4_0_OFFSET UNITYSDK_OFFSET(0x162DBA80)
#define CLASS_1_8A0744A5CDB04F6F___C__GETSHEETVALUES_B__4_1_OFFSET UNITYSDK_OFFSET(0x162DBAA0)

inline static constexpr unsigned int Class_1_8A0744A5CDB04F6F___c_TypeDefinitionIndex = 50405;

class Class_1_8A0744A5CDB04F6F___c : public ::System::Object
{
public:
	static ::Class_1_8A0744A5CDB04F6F___c** StaticGet___9()
	{
		return (::Class_1_8A0744A5CDB04F6F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A0744A5CDB04F6F___c_TypeDefinitionIndex)->GetStaticField(0x5CF80);
	}
	static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A0744A5CDB04F6F___c_TypeDefinitionIndex)->GetStaticField(0x5CF88);
	}
	static ::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Newtonsoft::Json::Linq::JToken*, ::System::Int32, ::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A0744A5CDB04F6F___c_TypeDefinitionIndex)->GetStaticField(0x5CF90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F___C__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_0(::Newtonsoft::Json::Linq::JToken* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F___C__GETSHEETVALUES_B__4_0_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32> _GetSheetValues_b__4_1(::Newtonsoft::Json::Linq::JToken* a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_2<::Newtonsoft::Json::Linq::JToken*, ::System::Int32>(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F___C__GETSHEETVALUES_B__4_1_OFFSET))(this, a1, a2);
	}
};
