#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A90D78D94DB1347.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_2_7F7BFA8C5E418566_METHOD_2_01759EC197D96B42_OFFSET UNITYSDK_OFFSET(0x13A3C620)
#define CLASS_2_7F7BFA8C5E418566_METHOD_2_7CC61CC9F46A6151_OFFSET UNITYSDK_OFFSET(0x13A3C3B0)
#define CLASS_2_7F7BFA8C5E418566_METHOD_2_85612402F6E5F53E_OFFSET UNITYSDK_OFFSET(0x13A3C0B0)
#define CLASS_2_7F7BFA8C5E418566_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0x13A3C010)
#define CLASS_2_7F7BFA8C5E418566_METHOD_2_F387528770ADE2B8_OFFSET UNITYSDK_OFFSET(0x13A3C8D0)
#define CLASS_2_7F7BFA8C5E418566__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A3CCE0)
#define CLASS_2_7F7BFA8C5E418566__CTOR_OFFSET UNITYSDK_OFFSET(0x13A3CC40)

inline static constexpr unsigned int Class_2_7F7BFA8C5E418566_TypeDefinitionIndex = 57259;

class Class_2_7F7BFA8C5E418566 : public ::Class_1_4A90D78D94DB1347
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7F7BFA8C5E418566_TypeDefinitionIndex)->GetStaticField(0x613B0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_85612402F6E5F53E(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566_METHOD_2_85612402F6E5F53E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7CC61CC9F46A6151(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566_METHOD_2_7CC61CC9F46A6151_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_01759EC197D96B42(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566_METHOD_2_01759EC197D96B42_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F387528770ADE2B8(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7F7BFA8C5E418566_METHOD_2_F387528770ADE2B8_OFFSET))(this, a1, a2);
	}
};
