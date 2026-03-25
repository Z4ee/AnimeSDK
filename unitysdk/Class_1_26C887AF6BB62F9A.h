#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightOrbConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_26C887AF6BB62F9A_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BE0EF0)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BE0D10)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_51597A874337E7BE_OFFSET UNITYSDK_OFFSET(0x16BE0F40)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_69E3D01AB6B357FB_OFFSET UNITYSDK_OFFSET(0x16BE0950)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BE06A0)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_9B8A899141D989BA_OFFSET UNITYSDK_OFFSET(0x16BE0620)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BE0DB0)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_AF22A964CF7BE620_OFFSET UNITYSDK_OFFSET(0x16BE0B00)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BE08F0)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BE0CD0)
#define CLASS_1_26C887AF6BB62F9A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BE0E50)
#define CLASS_1_26C887AF6BB62F9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BE12A0)

inline static constexpr unsigned int Class_1_26C887AF6BB62F9A_TypeDefinitionIndex = 12267;

class Class_1_26C887AF6BB62F9A : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26C887AF6BB62F9A_TypeDefinitionIndex)->GetStaticField(0x28B40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26C887AF6BB62F9A_TypeDefinitionIndex)->GetStaticField(0x28B48);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26C887AF6BB62F9A_TypeDefinitionIndex)->GetStaticField(0x28B50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26C887AF6BB62F9A_TypeDefinitionIndex)->GetStaticField(0xD640);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26C887AF6BB62F9A_TypeDefinitionIndex)->GetStaticField(0xD641);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>* Method_1_9B8A899141D989BA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_9B8A899141D989BA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*> Method_1_69E3D01AB6B357FB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOrbConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_69E3D01AB6B357FB_OFFSET))();
	}

	static ::RPG::GameCore::GridFightOrbConfigRow* Method_1_AF22A964CF7BE620(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightOrbConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_AF22A964CF7BE620_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_51597A874337E7BE(::RPG::GameCore::GridFightOrbConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_26C887AF6BB62F9A_METHOD_1_51597A874337E7BE_OFFSET))(a1);
	}
};
