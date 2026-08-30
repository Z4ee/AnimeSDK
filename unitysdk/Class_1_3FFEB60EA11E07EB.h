#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleChooseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CEF2790)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_11079859AFFAE6F0_OFFSET UNITYSDK_OFFSET(0x1CEF27E0)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_2CC66AD59612AF90_OFFSET UNITYSDK_OFFSET(0x1CEF2370)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEF25C0)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_8CDFEFD3EE6996BD_OFFSET UNITYSDK_OFFSET(0x1CEF2200)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_AB8B9A1BA6D4D0C4_OFFSET UNITYSDK_OFFSET(0x1CEF1EF0)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEF2650)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEF21A0)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEF1F70)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEF2580)
#define CLASS_1_3FFEB60EA11E07EB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEF26F0)
#define CLASS_1_3FFEB60EA11E07EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF2BB0)

inline static constexpr unsigned int Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex = 13585;

class Class_1_3FFEB60EA11E07EB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex)->GetStaticField(0x48A30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex)->GetStaticField(0x48A38);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex)->GetStaticField(0x48A40);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex)->GetStaticField(0x10B90);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FFEB60EA11E07EB_TypeDefinitionIndex)->GetStaticField(0x10B91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>* Method_1_AB8B9A1BA6D4D0C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_AB8B9A1BA6D4D0C4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*> Method_1_8CDFEFD3EE6996BD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_8CDFEFD3EE6996BD_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleChooseRow* Method_1_2CC66AD59612AF90(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSrcType a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightRoleChooseRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitSrcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_2CC66AD59612AF90_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_11079859AFFAE6F0(::RPG::GameCore::GridFightRoleChooseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleChooseRow*))((::PBYTE)hIl2Cpp + CLASS_1_3FFEB60EA11E07EB_METHOD_1_11079859AFFAE6F0_OFFSET))(a1);
	}
};
