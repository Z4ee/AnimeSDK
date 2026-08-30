#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveNodeTypeDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF12424AA707C7E1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D712B50)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_4FCD3FDB567E4695_OFFSET UNITYSDK_OFFSET(0x1D712330)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_51A91202493E152E_OFFSET UNITYSDK_OFFSET(0x1D7127B0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_7371AAA879A8B753_OFFSET UNITYSDK_OFFSET(0x1D712BA0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D712980)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D712A10)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D7125E0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_D7393B5681F1E32A_OFFSET UNITYSDK_OFFSET(0x1D712640)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D7123B0)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D712940)
#define CLASS_1_CF12424AA707C7E1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D712AB0)
#define CLASS_1_CF12424AA707C7E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D712F10)

inline static constexpr unsigned int Class_1_CF12424AA707C7E1_TypeDefinitionIndex = 11679;

class Class_1_CF12424AA707C7E1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0xF8A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0xF8A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0xF8B0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x6B30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF12424AA707C7E1_TypeDefinitionIndex)->GetStaticField(0x6B31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>* Method_1_4FCD3FDB567E4695()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_4FCD3FDB567E4695_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*> Method_1_D7393B5681F1E32A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeTypeDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_D7393B5681F1E32A_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveNodeTypeDataRow* Method_1_51A91202493E152E(::RPG::GameCore::IdleLiveNodeType a1)
	{
		return ((::RPG::GameCore::IdleLiveNodeTypeDataRow*(*)(::RPG::GameCore::IdleLiveNodeType))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_51A91202493E152E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_7371AAA879A8B753(::RPG::GameCore::IdleLiveNodeTypeDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveNodeTypeDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_CF12424AA707C7E1_METHOD_1_7371AAA879A8B753_OFFSET))(a1);
	}
};
