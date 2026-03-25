#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_556E9C29895B365A;
class Class_3_556E9C29895B365A_1;
class Class_3_556E9C29895B365A_2;
class Class_3_556E9C29895B365A_3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class String; }

#define CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_1_OFFSET UNITYSDK_OFFSET(0x99E1B80)
#define CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_2_OFFSET UNITYSDK_OFFSET(0x99E1D00)
#define CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_3_OFFSET UNITYSDK_OFFSET(0x99E1E80)
#define CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_OFFSET UNITYSDK_OFFSET(0x99E1A00)

inline static constexpr unsigned int Class_1_0054DCA8203F3491_TypeDefinitionIndex = 57019;

class Class_1_0054DCA8203F3491 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0054DCA8203F3491_TypeDefinitionIndex)->GetStaticField(0x12560);
	}

	static ::Class_3_556E9C29895B365A* Method_1_8424593DD106B60C(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_1* Method_1_8424593DD106B60C_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_1*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_2* Method_1_8424593DD106B60C_2(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_2*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_3* Method_1_8424593DD106B60C_3(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_3*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0054DCA8203F3491_METHOD_1_8424593DD106B60C_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
