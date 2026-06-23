#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_54E8C606F89EB567.h"

class Class_1_35D50070BC469EAB;
class Class_1_BFC2F9D5895EB2FB;
class Class_2_A2809E685EB92269;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_7BF98046FA3EA064_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13387DC0)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_0D98BA1C1344E5B3_OFFSET UNITYSDK_OFFSET(0x133881B0)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13388210)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x13388360)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x13388350)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x133882A0)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x133882B0)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13388340)
#define CLASS_3_7BF98046FA3EA064_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13388330)
#define CLASS_3_7BF98046FA3EA064_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13387B00)
#define CLASS_3_7BF98046FA3EA064__CCTOR_OFFSET UNITYSDK_OFFSET(0x13387E10)
#define CLASS_3_7BF98046FA3EA064__CTOR_OFFSET UNITYSDK_OFFSET(0x13387EA0)

inline static constexpr unsigned int Class_3_7BF98046FA3EA064_TypeDefinitionIndex = 64734;

class Class_3_7BF98046FA3EA064 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Int32* StaticGet_Field_3_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_7BF98046FA3EA064_TypeDefinitionIndex)->GetStaticField(0x11DB0);
	}
	// static const ::System::Int32 Field_3_15 = 0xA4; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* Field_3_6; // 0x50
	::Class_1_BFC2F9D5895EB2FB* Field_3_9; // 0x58
	::System::Object* Field_3_12; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_A2809E685EB92269*>* Field_3_7; // 0x68
	::System::Collections::Generic::HashSet_1<::Class_1_35D50070BC469EAB*>* Field_3_11; // 0x70
	::System::String* Field_3_2; // 0x78
	::System::String* Field_3_0; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_4; // 0x88
	::System::Int32 Field_3_1; // 0x90
	::System::Boolean Field_3_10; // 0x94
	::System::Boolean Field_3_13; // 0x95
	::System::Boolean Field_3_3; // 0x96
	::Enum_3_54E8C606F89EB567 Field_3_8; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_0D98BA1C1344E5B3(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_0D98BA1C1344E5B3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	static ::Class_3_7BF98046FA3EA064* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7BF98046FA3EA064*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7BF98046FA3EA064_METHOD_3_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}
};
