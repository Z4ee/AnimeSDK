#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A8AA65B75807FFC4.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C47C9DAA7E37537D_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x1066EDD0)
#define CLASS_1_C47C9DAA7E37537D_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1066ED90)
#define CLASS_1_C47C9DAA7E37537D_METHOD_1_47A0EBEF5EFA702E_OFFSET UNITYSDK_OFFSET(0x1066EE50)
#define CLASS_1_C47C9DAA7E37537D__CTOR_OFFSET UNITYSDK_OFFSET(0x1066EDB0)

inline static constexpr unsigned int Class_1_C47C9DAA7E37537D_TypeDefinitionIndex = 60373;

class Class_1_C47C9DAA7E37537D : public ::System::Object
{
public:
	::Struct_2_A8AA65B75807FFC4 Field_1_0; // 0x10

	::System::Void _ctor(::Struct_2_A8AA65B75807FFC4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A8AA65B75807FFC4))((::PBYTE)hIl2Cpp + CLASS_1_C47C9DAA7E37537D__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_A8AA65B75807FFC4 Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_A8AA65B75807FFC4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47C9DAA7E37537D_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C47C9DAA7E37537D_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_47A0EBEF5EFA702E(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C47C9DAA7E37537D_METHOD_1_47A0EBEF5EFA702E_OFFSET))(this, a1);
	}
};
