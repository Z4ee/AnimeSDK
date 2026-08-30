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

#define CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_1_OFFSET UNITYSDK_OFFSET(0xB55E220)
#define CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_2_OFFSET UNITYSDK_OFFSET(0xB55E380)
#define CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_3_OFFSET UNITYSDK_OFFSET(0xB55E4E0)
#define CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_OFFSET UNITYSDK_OFFSET(0xB55E0C0)

inline static constexpr unsigned int Class_1_F1EB005DD7D84C9F_TypeDefinitionIndex = 69698;

class Class_1_F1EB005DD7D84C9F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NDFMCFDAHFM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F1EB005DD7D84C9F_TypeDefinitionIndex)->GetStaticField(0x13F40);
	}

	static ::Class_3_556E9C29895B365A* Method_1_E600C1A04C7BCF8F(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_1* Method_1_E600C1A04C7BCF8F_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_1*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_2* Method_1_E600C1A04C7BCF8F_2(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_2*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_2_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_556E9C29895B365A_3* Method_1_E600C1A04C7BCF8F_3(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4, ::System::String* a5, ::System::String* a6, ::System::Int32 a7)
	{
		return ((::Class_3_556E9C29895B365A_3*(*)(::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1EB005DD7D84C9F_METHOD_1_E600C1A04C7BCF8F_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
