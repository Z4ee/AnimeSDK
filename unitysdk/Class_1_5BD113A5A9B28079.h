#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BD1A98EFEDD35816.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_5BD113A5A9B28079_METHOD_1_19F0C95781415336_OFFSET UNITYSDK_OFFSET(0xB5378E0)
#define CLASS_1_5BD113A5A9B28079_METHOD_1_255354F5673565DB_OFFSET UNITYSDK_OFFSET(0xB5381D0)
#define CLASS_1_5BD113A5A9B28079_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB538D10)
#define CLASS_1_5BD113A5A9B28079_METHOD_1_B6CF30DC34FB8612_OFFSET UNITYSDK_OFFSET(0xB538130)
#define CLASS_1_5BD113A5A9B28079_METHOD_1_D2D3A8CEA81ED5B5_OFFSET UNITYSDK_OFFSET(0xB538D80)
#define CLASS_1_5BD113A5A9B28079_METHOD_1_F02FFEDD1994A92E_OFFSET UNITYSDK_OFFSET(0xB538BE0)
#define CLASS_1_5BD113A5A9B28079__CTOR_OFFSET UNITYSDK_OFFSET(0xB539CE0)

inline static constexpr unsigned int Class_1_5BD113A5A9B28079_TypeDefinitionIndex = 73758;

class Class_1_5BD113A5A9B28079 : public ::System::Object
{
public:
	::Class_1_303D5A33D1401D59* OKPMJOCEKBC; // 0x10
	::RPG::GameCore::BlockNodeConfig* ALPMEMFCLJG; // 0x18
	::System::Collections::Generic::HashSet_1<::Struct_2_BD1A98EFEDD35816>* OFPHHAJLNAI; // 0x20
	::System::Collections::Generic::HashSet_1<::Struct_2_BD1A98EFEDD35816>* FIPHAHPENBP; // 0x28
	::System::Collections::Generic::Dictionary_2<::Struct_2_BD1A98EFEDD35816, ::RPG::GameCore::BlockNodeConfig*>* BICDNBMIJPB; // 0x30
	::System::String* ANBDEIDCEAC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_19F0C95781415336(::Struct_2_BD1A98EFEDD35816 a1, ::RPG::GameCore::BlockNodeConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_19F0C95781415336_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B6CF30DC34FB8612(::RPG::GameCore::BlockNodeConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_B6CF30DC34FB8612_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_255354F5673565DB(::Struct_2_BD1A98EFEDD35816 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Quaternion& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_255354F5673565DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F02FFEDD1994A92E(::Struct_2_BD1A98EFEDD35816 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BD1A98EFEDD35816, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_F02FFEDD1994A92E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_D2D3A8CEA81ED5B5(::System::Text::StringBuilder* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_5BD113A5A9B28079_METHOD_1_D2D3A8CEA81ED5B5_OFFSET))(this, a1);
	}
};
