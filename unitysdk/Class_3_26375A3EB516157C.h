#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_26375A3EB516157C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17671CF0)
#define CLASS_3_26375A3EB516157C_METHOD_3_93C0582158D7A194_OFFSET UNITYSDK_OFFSET(0x17671EE0)
#define CLASS_3_26375A3EB516157C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17671E50)
#define CLASS_3_26375A3EB516157C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x17671DD0)
#define CLASS_3_26375A3EB516157C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17671CA0)
#define CLASS_3_26375A3EB516157C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17671D40)
#define CLASS_3_26375A3EB516157C__CTOR_OFFSET UNITYSDK_OFFSET(0x17671DC0)

inline static constexpr unsigned int Class_3_26375A3EB516157C_TypeDefinitionIndex = 52320;

class Class_3_26375A3EB516157C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_26375A3EB516157C_TypeDefinitionIndex)->GetStaticField(0xFF30);
	}
	static ::System::Boolean* StaticGet_Field_3_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_26375A3EB516157C_TypeDefinitionIndex)->GetStaticField(0xFF31);
	}
	// static const ::System::Int32 Field_3_5 = 0xB7; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* Field_3_7; // 0x48
	::System::String* Field_3_0; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_6; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_26375A3EB516157C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_26375A3EB516157C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_93C0582158D7A194(::System::String* a1, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_3_26375A3EB516157C_METHOD_3_93C0582158D7A194_OFFSET))(this, a1, a2, a3);
	}
};
