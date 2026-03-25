#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_43B55A8BB7F2DC17___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1662B1C0)
#define CLASS_1_43B55A8BB7F2DC17___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1662B200)
#define CLASS_1_43B55A8BB7F2DC17___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET UNITYSDK_OFFSET(0x1662B290)
#define CLASS_1_43B55A8BB7F2DC17___C___GETDICTDESC_B__3_0_OFFSET UNITYSDK_OFFSET(0x1662B210)

inline static constexpr unsigned int Class_1_43B55A8BB7F2DC17___c_TypeDefinitionIndex = 28992;

class Class_1_43B55A8BB7F2DC17___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B55A8BB7F2DC17___c_TypeDefinitionIndex)->GetStaticField(0x26D00);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B55A8BB7F2DC17___c_TypeDefinitionIndex)->GetStaticField(0x26D08);
	}
	static ::Class_1_43B55A8BB7F2DC17___c** StaticGet___9()
	{
		return (::Class_1_43B55A8BB7F2DC17___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43B55A8BB7F2DC17___c_TypeDefinitionIndex)->GetStaticField(0x26D10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43B55A8BB7F2DC17___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B55A8BB7F2DC17___C__CTOR_OFFSET))(this);
	}

	::System::String* __GetDictDesc_b__3_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> p)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_43B55A8BB7F2DC17___C___GETDICTDESC_B__3_0_OFFSET))(this, p);
	}

	::System::UInt32 __FilterCatValueMapByExtrem_b__5_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> kvp)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_43B55A8BB7F2DC17___C___FILTERCATVALUEMAPBYEXTREM_B__5_1_OFFSET))(this, kvp);
	}
};
