#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RuntimeAtlasManager; }

#define CLASS_1_0FE8866DA7E9C099_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A59830)
#define CLASS_1_0FE8866DA7E9C099_METHOD_1_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x18A59690)
#define CLASS_1_0FE8866DA7E9C099_METHOD_1_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x18A598C0)
#define CLASS_1_0FE8866DA7E9C099__CTOR_OFFSET UNITYSDK_OFFSET(0x18A59680)

inline static constexpr unsigned int Class_1_0FE8866DA7E9C099_TypeDefinitionIndex = 72565;

class Class_1_0FE8866DA7E9C099 : public ::System::Object
{
public:
	::UnityEngine::UI::RuntimeAtlasManager* NECFCKBGIIJ; // 0x10
	::UnityEngine::Material* ILKIEOPBAGE; // 0x18
	::UnityEngine::Texture* JCPDDABHJPI; // 0x20
	::UnityEngine::ComputeShader* AAFAJOFGPCN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_METHOD_1_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FE8866DA7E9C099_METHOD_1_AA7E3074254D484A_OFFSET))(this);
	}
};
