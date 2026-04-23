#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesGachaCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A95D7F32277B7C6D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1833CD90)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1833CBB0)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_3F29B5D9B227E769_OFFSET UNITYSDK_OFFSET(0x1833C4C0)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1833C540)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_8F0AD77FA1616DFA_OFFSET UNITYSDK_OFFSET(0x1833C7F0)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1833CC50)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1833C790)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1833CB70)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1833CCF0)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_F39000BC3DDB76B7_OFFSET UNITYSDK_OFFSET(0x1833CDE0)
#define CLASS_1_A95D7F32277B7C6D_METHOD_1_F761D165C8A8B423_OFFSET UNITYSDK_OFFSET(0x1833C9A0)
#define CLASS_1_A95D7F32277B7C6D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1833D140)

inline static constexpr unsigned int Class_1_A95D7F32277B7C6D_TypeDefinitionIndex = 11550;

class Class_1_A95D7F32277B7C6D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A95D7F32277B7C6D_TypeDefinitionIndex)->GetStaticField(0x290E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A95D7F32277B7C6D_TypeDefinitionIndex)->GetStaticField(0x290E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A95D7F32277B7C6D_TypeDefinitionIndex)->GetStaticField(0x290F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A95D7F32277B7C6D_TypeDefinitionIndex)->GetStaticField(0xAE90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A95D7F32277B7C6D_TypeDefinitionIndex)->GetStaticField(0xAE91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>* Method_1_3F29B5D9B227E769()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_3F29B5D9B227E769_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*> Method_1_8F0AD77FA1616DFA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesGachaCardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_8F0AD77FA1616DFA_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesGachaCardRow* Method_1_F761D165C8A8B423(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesGachaCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_F761D165C8A8B423_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F39000BC3DDB76B7(::RPG::GameCore::PlanetFesGachaCardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesGachaCardRow*))((::PBYTE)hIl2Cpp + CLASS_1_A95D7F32277B7C6D_METHOD_1_F39000BC3DDB76B7_OFFSET))(a1);
	}
};
