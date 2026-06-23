#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1824EF69C8E376A3;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4ABED7A3ACE6D8EB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x150A3E80)
#define CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x150A3F80)
#define CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x150A40B0)
#define CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x150A4030)
#define CLASS_3_4ABED7A3ACE6D8EB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x150A3E30)
#define CLASS_3_4ABED7A3ACE6D8EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x150A3ED0)
#define CLASS_3_4ABED7A3ACE6D8EB__CTOR_OFFSET UNITYSDK_OFFSET(0x150A3F70)

inline static constexpr unsigned int Class_3_4ABED7A3ACE6D8EB_TypeDefinitionIndex = 46272;

class Class_3_4ABED7A3ACE6D8EB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::String** StaticGet_Field_3_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4ABED7A3ACE6D8EB_TypeDefinitionIndex)->GetStaticField(0x32AA0);
	}
	// static const ::System::Int32 Field_3_6 = 0xCA; // 0x0
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_3_0; // 0x48
	::System::Action* Field_3_4; // 0x50
	::System::Action* Field_3_3; // 0x58
	::System::Boolean Field_3_2; // 0x60
	::UnityEngine::Vector3 Field_3_1; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Class_3_4ABED7A3ACE6D8EB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_4ABED7A3ACE6D8EB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4ABED7A3ACE6D8EB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
