#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_0ABAC35E4F599297_OFFSET UNITYSDK_OFFSET(0x1782FEA0)
#define CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_234E5D4A70D31876_OFFSET UNITYSDK_OFFSET(0x1782FD30)
#define CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_81ECA572D1FBB77F_OFFSET UNITYSDK_OFFSET(0x1782FD20)
#define CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1782FD10)

inline static constexpr unsigned int Class_1_BD4CD47E959AABC1_Class_1_ECFB836530F9A3F9_TypeDefinitionIndex = 74424;

class Class_1_BD4CD47E959AABC1_Class_1_ECFB836530F9A3F9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_6; // 0x18
	::UnityEngine::Material* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81ECA572D1FBB77F(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_81ECA572D1FBB77F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_234E5D4A70D31876(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_234E5D4A70D31876_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0ABAC35E4F599297(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD4CD47E959AABC1_CLASS_1_ECFB836530F9A3F9_METHOD_1_0ABAC35E4F599297_OFFSET))(this, a1, a2);
	}
};
