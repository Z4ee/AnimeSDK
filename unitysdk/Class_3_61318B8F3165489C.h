#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Struct_2_F213AC3D3FBF57B9_2.h"

class Class_1_EA1FEF8121ADE963;
class Class_2_D1970C03380B1430;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_61318B8F3165489C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1440FC10)
#define CLASS_3_61318B8F3165489C_METHOD_3_305346B31EF36243_OFFSET UNITYSDK_OFFSET(0x1440FFC0)
#define CLASS_3_61318B8F3165489C_METHOD_3_64752E993AF7A109_OFFSET UNITYSDK_OFFSET(0x1440FE00)
#define CLASS_3_61318B8F3165489C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1440FCF0)
#define CLASS_3_61318B8F3165489C_METHOD_3_B647D21FCD359F7E_OFFSET UNITYSDK_OFFSET(0x14410120)
#define CLASS_3_61318B8F3165489C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1440FD80)
#define CLASS_3_61318B8F3165489C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1440F9E0)
#define CLASS_3_61318B8F3165489C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1440FC60)
#define CLASS_3_61318B8F3165489C__CTOR_OFFSET UNITYSDK_OFFSET(0x1440FCE0)

inline static constexpr unsigned int Class_3_61318B8F3165489C_TypeDefinitionIndex = 68691;

class Class_3_61318B8F3165489C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_14 = 0x19; // 0x0
	::Class_2_D1970C03380B1430* Field_3_10; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_6; // 0x50
	::Class_2_D1970C03380B1430* Field_3_9; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_5; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_7; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_0; // 0x70
	::System::UInt32 Field_3_8; // 0x78
	::System::Single Field_3_4; // 0x7C
	::Struct_2_F213AC3D3FBF57B9_2 Field_3_1; // 0x80
	::System::Single Field_3_11; // 0xC0
	::System::Single Field_3_15; // 0xC4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_61318B8F3165489C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_61318B8F3165489C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_64752E993AF7A109()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_METHOD_3_64752E993AF7A109_OFFSET))(this);
	}

	::System::Void Method_3_305346B31EF36243(::MoleMole::Battle::Entity* a1, ::Class_1_EA1FEF8121ADE963* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_EA1FEF8121ADE963*))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_METHOD_3_305346B31EF36243_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_B647D21FCD359F7E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61318B8F3165489C_METHOD_3_B647D21FCD359F7E_OFFSET))(this);
	}
};
