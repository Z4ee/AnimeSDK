#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_2_1824EF69C8E376A3;
class Class_4_9D746F36A53A6BE5;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_29AD770B16B2D814_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEC28EC0)
#define CLASS_3_29AD770B16B2D814_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xEC290B0)
#define CLASS_3_29AD770B16B2D814_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEC28FA0)
#define CLASS_3_29AD770B16B2D814_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xEC29030)
#define CLASS_3_29AD770B16B2D814_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEC28E60)
#define CLASS_3_29AD770B16B2D814__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC28F10)
#define CLASS_3_29AD770B16B2D814__CTOR_OFFSET UNITYSDK_OFFSET(0xEC28F90)

inline static constexpr unsigned int Class_3_29AD770B16B2D814_TypeDefinitionIndex = 77776;

class Class_3_29AD770B16B2D814 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_7 = 0xCB; // 0x0
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_3_2; // 0x48
	::Class_4_9D746F36A53A6BE5* Field_3_4; // 0x50
	::MoleMole::Config::ConfigTrainingRoom* Field_3_0; // 0x58
	::MoleMole::Battle::Entity* Field_3_1; // 0x60
	::System::Double Field_3_3; // 0x68
	::System::Boolean Field_3_6; // 0x70
	::System::Int32 Field_3_5; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_29AD770B16B2D814* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_29AD770B16B2D814*(*)())((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_29AD770B16B2D814_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}
};
