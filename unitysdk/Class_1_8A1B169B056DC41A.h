#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A36E79DF579B3ED;
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x138666C0)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET UNITYSDK_OFFSET(0x13866350)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x13866480)
#define CLASS_1_8A1B169B056DC41A_METHOD_1_E83C86A203FAF2A6_OFFSET UNITYSDK_OFFSET(0x13866630)
#define CLASS_1_8A1B169B056DC41A__CTOR_OFFSET UNITYSDK_OFFSET(0x13866760)

inline static constexpr unsigned int Class_1_8A1B169B056DC41A_TypeDefinitionIndex = 68831;

class Class_1_8A1B169B056DC41A : public ::System::Object
{
public:
	::UnityEngine::Mesh* Field_1_0; // 0x10
	::UnityEngine::Texture2D* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_7A36E79DF579B3ED*>* Field_1_2; // 0x20
	::RPG::Client::CrowdAnimator::CrowdPrototype* Field_1_3; // 0x28
	::UnityEngine::Material* Field_1_4; // 0x30
	::UnityEngine::Material* Field_1_5; // 0x38
	::System::Int32 Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Int32 Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6279B2A89754B8E7(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::RPG::Client::CrowdAnimator::CrowdPrototype* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::RPG::Client::CrowdAnimator::CrowdPrototype*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_6279B2A89754B8E7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8E0634CDC64D0684(::Class_1_7A36E79DF579B3ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A36E79DF579B3ED*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_1_E83C86A203FAF2A6(::Class_1_7A36E79DF579B3ED* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A36E79DF579B3ED*))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_E83C86A203FAF2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A1B169B056DC41A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
