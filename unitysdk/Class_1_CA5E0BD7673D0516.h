#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FinishTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CA5E0BD7673D0516_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16D8B2B0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16D8B0D0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_312F8B9217D9BF72_OFFSET UNITYSDK_OFFSET(0x16D8B300)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_50FB881F8B2F0AE3_OFFSET UNITYSDK_OFFSET(0x16D8AD10)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16D8AA60)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_7F91ACB21CF5D95E_OFFSET UNITYSDK_OFFSET(0x16D8A9E0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_81E536F6A6A45B31_OFFSET UNITYSDK_OFFSET(0x16D8AEC0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16D8B170)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16D8ACB0)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16D8B090)
#define CLASS_1_CA5E0BD7673D0516_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16D8B210)
#define CLASS_1_CA5E0BD7673D0516__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D8B660)

inline static constexpr unsigned int Class_1_CA5E0BD7673D0516_TypeDefinitionIndex = 12953;

class Class_1_CA5E0BD7673D0516 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x14D00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x14D08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x14D10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x6140);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA5E0BD7673D0516_TypeDefinitionIndex)->GetStaticField(0x6141);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>* Method_1_7F91ACB21CF5D95E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_7F91ACB21CF5D95E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*> Method_1_50FB881F8B2F0AE3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_50FB881F8B2F0AE3_OFFSET))();
	}

	static ::RPG::GameCore::FinishTypeConfigRow* Method_1_81E536F6A6A45B31(::RPG::GameCore::QuestFinishType a1)
	{
		return ((::RPG::GameCore::FinishTypeConfigRow*(*)(::RPG::GameCore::QuestFinishType))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_81E536F6A6A45B31_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_312F8B9217D9BF72(::RPG::GameCore::FinishTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FinishTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_CA5E0BD7673D0516_METHOD_1_312F8B9217D9BF72_OFFSET))(a1);
	}
};
