#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class OraclePuzzleItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C64A90CC94D1A46C_METHOD_1_36F6FA1B3FA08C93_OFFSET UNITYSDK_OFFSET(0x18A1A320)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_38E53E27B88E4775_OFFSET UNITYSDK_OFFSET(0x18A1A2E0)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_66A26014B24CE992_OFFSET UNITYSDK_OFFSET(0x18A1A360)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_B287D64AA6B44527_OFFSET UNITYSDK_OFFSET(0x18A19F90)
#define CLASS_1_C64A90CC94D1A46C_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18A1A1E0)
#define CLASS_1_C64A90CC94D1A46C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1A6F0)

inline static constexpr unsigned int Class_1_C64A90CC94D1A46C_TypeDefinitionIndex = 78264;

class Class_1_C64A90CC94D1A46C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* BONALEENMON; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* OJENGJKCKGE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* OOBNOFFKCHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_B287D64AA6B44527()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_B287D64AA6B44527_OFFSET))(this);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* Method_1_38E53E27B88E4775()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_38E53E27B88E4775_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>* Method_1_36F6FA1B3FA08C93()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_36F6FA1B3FA08C93_OFFSET))(this);
	}

	::System::Int32 Method_1_66A26014B24CE992(::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::OraclePuzzleItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_C64A90CC94D1A46C_METHOD_1_66A26014B24CE992_OFFSET))(this, a1);
	}
};
