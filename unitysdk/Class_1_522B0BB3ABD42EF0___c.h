#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_3_707412604A129938;
namespace MoleMole::LevelPerform { class DirectKillShakeSetting; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_522B0BB3ABD42EF0___C_METHOD_1_2D4F45820EE563F9_OFFSET UNITYSDK_OFFSET(0x12590900)
#define CLASS_1_522B0BB3ABD42EF0___C_METHOD_1_E661BAEFA63CDC37_OFFSET UNITYSDK_OFFSET(0x12590B30)
#define CLASS_1_522B0BB3ABD42EF0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125908B0)
#define CLASS_1_522B0BB3ABD42EF0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x125908F0)

inline static constexpr unsigned int Class_1_522B0BB3ABD42EF0___c_TypeDefinitionIndex = 67980;

class Class_1_522B0BB3ABD42EF0___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_3_707412604A129938*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>** StaticGet___9__24_0()
	{
		return (::System::Func_3<::Class_3_707412604A129938*, ::System::String*, ::MoleMole::LevelPerform::DirectKillShakeSetting*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0___c_TypeDefinitionIndex)->GetStaticField(0x418D0);
	}
	static ::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>** StaticGet___9__36_0()
	{
		return (::System::Func_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0___c_TypeDefinitionIndex)->GetStaticField(0x418D8);
	}
	static ::Class_1_522B0BB3ABD42EF0___c** StaticGet___9()
	{
		return (::Class_1_522B0BB3ABD42EF0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_522B0BB3ABD42EF0___c_TypeDefinitionIndex)->GetStaticField(0x418E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0___C__CTOR_OFFSET))(this);
	}

	::MoleMole::LevelPerform::DirectKillShakeSetting* Method_1_2D4F45820EE563F9(::Class_3_707412604A129938* a1, ::System::String* a2)
	{
		return ((::MoleMole::LevelPerform::DirectKillShakeSetting*(*)(::PVOID, ::Class_3_707412604A129938*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0___C_METHOD_1_2D4F45820EE563F9_OFFSET))(this, a1, a2);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_E661BAEFA63CDC37()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_522B0BB3ABD42EF0___C_METHOD_1_E661BAEFA63CDC37_OFFSET))(this);
	}
};
