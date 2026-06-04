#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E05E7A6D9DE9138B.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define CLASS_2_7D53347CD75A5D8B_METHOD_2_01759EC197D96B42_OFFSET UNITYSDK_OFFSET(0xA92F1B0)
#define CLASS_2_7D53347CD75A5D8B_METHOD_2_1FA700D56B10D5A5_OFFSET UNITYSDK_OFFSET(0xA92F780)
#define CLASS_2_7D53347CD75A5D8B_METHOD_2_566BBE726C717B08_OFFSET UNITYSDK_OFFSET(0xA92F460)
#define CLASS_2_7D53347CD75A5D8B_METHOD_2_7CC61CC9F46A6151_OFFSET UNITYSDK_OFFSET(0xA92EF40)
#define CLASS_2_7D53347CD75A5D8B_METHOD_2_85612402F6E5F53E_OFFSET UNITYSDK_OFFSET(0xA92EC40)
#define CLASS_2_7D53347CD75A5D8B_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xA92EBA0)
#define CLASS_2_7D53347CD75A5D8B__CTOR_OFFSET UNITYSDK_OFFSET(0xA92F6E0)

inline static constexpr unsigned int Class_2_7D53347CD75A5D8B_TypeDefinitionIndex = 56020;

class Class_2_7D53347CD75A5D8B : public ::Class_1_E05E7A6D9DE9138B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::UnityEngine::Object* Method_2_85612402F6E5F53E(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_85612402F6E5F53E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7CC61CC9F46A6151(::System::String* a1, ::RPG::Client::CachedAssetLogicType a2, ::System::Action_1<::UnityEngine::Object*>* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::RPG::Client::CachedAssetLogicType, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_7CC61CC9F46A6151_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_01759EC197D96B42(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_01759EC197D96B42_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_566BBE726C717B08(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_566BBE726C717B08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1FA700D56B10D5A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D53347CD75A5D8B_METHOD_2_1FA700D56B10D5A5_OFFSET))(this);
	}
};
