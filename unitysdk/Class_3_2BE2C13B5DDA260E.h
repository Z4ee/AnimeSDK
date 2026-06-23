#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_73245C3A15EC0443.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_599;
class Class_1_0FACF54E1096AF57;
class Class_1_7807B2B04302CD7B_22;
namespace MoleMole { class MonoSceneFindWayObject; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2BE2C13B5DDA260E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14306890)
#define CLASS_3_2BE2C13B5DDA260E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14306B10)
#define CLASS_3_2BE2C13B5DDA260E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14306BA0)
#define CLASS_3_2BE2C13B5DDA260E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x143064F0)
#define CLASS_3_2BE2C13B5DDA260E__CCTOR_OFFSET UNITYSDK_OFFSET(0x143068E0)
#define CLASS_3_2BE2C13B5DDA260E__CTOR_OFFSET UNITYSDK_OFFSET(0x14306960)

inline static constexpr unsigned int Class_3_2BE2C13B5DDA260E_TypeDefinitionIndex = 85860;

class Class_3_2BE2C13B5DDA260E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_2BE2C13B5DDA260E_TypeDefinitionIndex)->GetStaticField(0x127D0);
	}
	// static const ::System::Int32 Field_3_7 = 0xC7; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_3_6; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_73245C3A15EC0443>* Field_3_3; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_599*>* Field_3_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSceneFindWayObject*>* Field_3_5; // 0x60
	::System::Collections::Generic::List_1<::Class_1_0FACF54E1096AF57*>* Field_3_1; // 0x68
	::Class_1_7807B2B04302CD7B_22* Field_3_4; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_2BE2C13B5DDA260E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2BE2C13B5DDA260E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2BE2C13B5DDA260E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
