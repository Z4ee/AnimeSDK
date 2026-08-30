#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterGuidePhaseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E3DF6751871FC6A0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CB09440)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_109346B3F95270F4_OFFSET UNITYSDK_OFFSET(0x1CB08C60)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB09270)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_908DAFADF8ED9C31_OFFSET UNITYSDK_OFFSET(0x1CB09490)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_9C7F899C01AB8561_OFFSET UNITYSDK_OFFSET(0x1CB08F70)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB09300)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB08F10)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_D8AA6CC738F8FE3F_OFFSET UNITYSDK_OFFSET(0x1CB090E0)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB08CE0)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB09230)
#define CLASS_1_E3DF6751871FC6A0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB093A0)
#define CLASS_1_E3DF6751871FC6A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB097B0)

inline static constexpr unsigned int Class_1_E3DF6751871FC6A0_TypeDefinitionIndex = 14095;

class Class_1_E3DF6751871FC6A0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3DF6751871FC6A0_TypeDefinitionIndex)->GetStaticField(0x536F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3DF6751871FC6A0_TypeDefinitionIndex)->GetStaticField(0x536F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3DF6751871FC6A0_TypeDefinitionIndex)->GetStaticField(0x53700);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3DF6751871FC6A0_TypeDefinitionIndex)->GetStaticField(0x11810);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3DF6751871FC6A0_TypeDefinitionIndex)->GetStaticField(0x11811);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>* Method_1_109346B3F95270F4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_109346B3F95270F4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*> Method_1_9C7F899C01AB8561()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterGuidePhaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_9C7F899C01AB8561_OFFSET))();
	}

	static ::RPG::GameCore::MonsterGuidePhaseConfigRow* Method_1_D8AA6CC738F8FE3F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MonsterGuidePhaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_D8AA6CC738F8FE3F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_908DAFADF8ED9C31(::RPG::GameCore::MonsterGuidePhaseConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonsterGuidePhaseConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E3DF6751871FC6A0_METHOD_1_908DAFADF8ED9C31_OFFSET))(a1);
	}
};
