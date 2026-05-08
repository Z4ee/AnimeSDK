#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_0C791B68CB2A5BF5_METHOD_1_2FB9DA1F70998790_OFFSET UNITYSDK_OFFSET(0x11B3F590)
#define CLASS_1_0C791B68CB2A5BF5_METHOD_1_5558FFC4A45750C6_OFFSET UNITYSDK_OFFSET(0x11B3F530)
#define CLASS_1_0C791B68CB2A5BF5_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x11B3F270)
#define CLASS_1_0C791B68CB2A5BF5__CTOR_OFFSET UNITYSDK_OFFSET(0x11B3F170)

inline static constexpr unsigned int Class_1_0C791B68CB2A5BF5_TypeDefinitionIndex = 82461;

class Class_1_0C791B68CB2A5BF5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Sprite*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C791B68CB2A5BF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C791B68CB2A5BF5_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_5558FFC4A45750C6(::MoleMole::TextureSheetData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + CLASS_1_0C791B68CB2A5BF5_METHOD_1_5558FFC4A45750C6_OFFSET))(this, a1);
	}

	::UnityEngine::Sprite* Method_1_2FB9DA1F70998790(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C791B68CB2A5BF5_METHOD_1_2FB9DA1F70998790_OFFSET))(this, a1);
	}
};
