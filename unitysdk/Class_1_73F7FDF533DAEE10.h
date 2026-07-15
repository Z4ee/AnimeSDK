#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraMotionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_73F7FDF533DAEE10_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B2FD280)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_401A12C1CE409994_OFFSET UNITYSDK_OFFSET(0x1B2FD2D0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B2FD0B0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_9FB43298E00A0F7B_OFFSET UNITYSDK_OFFSET(0x1B2FCD70)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_A5ABE3EA0B1CE172_OFFSET UNITYSDK_OFFSET(0x1B2FCA60)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B2FD140)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B2FCD10)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B2FCAE0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B2FD070)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B2FD1E0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_FA8760829199F9BD_OFFSET UNITYSDK_OFFSET(0x1B2FCEE0)
#define CLASS_1_73F7FDF533DAEE10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2FD640)

inline static constexpr unsigned int Class_1_73F7FDF533DAEE10_TypeDefinitionIndex = 12542;

class Class_1_73F7FDF533DAEE10 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x4E500);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x4E508);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x4E510);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0xDFD0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0xDFD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>* Method_1_A5ABE3EA0B1CE172()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_A5ABE3EA0B1CE172_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*> Method_1_9FB43298E00A0F7B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_9FB43298E00A0F7B_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraMotionRow* Method_1_FA8760829199F9BD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraMotionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_FA8760829199F9BD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_401A12C1CE409994(::RPG::GameCore::ChimeraMotionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraMotionRow*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_401A12C1CE409994_OFFSET))(a1);
	}
};
