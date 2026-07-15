#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class UIMeta; }

#define CLASS_2_8B9433697E556012_METHOD_2_1A23D17D80D479D2_OFFSET UNITYSDK_OFFSET(0x1837AA90)
#define CLASS_2_8B9433697E556012_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x18379C40)
#define CLASS_2_8B9433697E556012_METHOD_2_776F330B7D6C7E4A_OFFSET UNITYSDK_OFFSET(0x1837A970)
#define CLASS_2_8B9433697E556012_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x18379CF0)
#define CLASS_2_8B9433697E556012_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x1837AA10)
#define CLASS_2_8B9433697E556012_METHOD_2_C46E88E4855259D7_OFFSET UNITYSDK_OFFSET(0x1837A380)
#define CLASS_2_8B9433697E556012_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18379D70)
#define CLASS_2_8B9433697E556012_METHOD_2_DB8E82518DAE405C_OFFSET UNITYSDK_OFFSET(0x1837A710)
#define CLASS_2_8B9433697E556012_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x18379DB0)
#define CLASS_2_8B9433697E556012__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18379AE0)
#define CLASS_2_8B9433697E556012__CTOR_OFFSET UNITYSDK_OFFSET(0x18379AD0)

inline static constexpr unsigned int Class_2_8B9433697E556012_TypeDefinitionIndex = 66485;

class Class_2_8B9433697E556012 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::RPG::Client::UIMeta* Field_2_0; // 0x38
	::Struct_2_CB7D37A2987B484B Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Boolean Method_2_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DB8E82518DAE405C(::RPG::Client::CameraDataAndFlags*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*&))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_DB8E82518DAE405C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C46E88E4855259D7(::RPG::Client::CameraDataAndFlags*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*&))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_C46E88E4855259D7_OFFSET))(this, a1);
	}

	::RPG::CustomRP::RPGDepthOfField_CoCMethod Method_2_776F330B7D6C7E4A(::RPG::GameCore::DOFCocMethodType a1)
	{
		return ((::RPG::CustomRP::RPGDepthOfField_CoCMethod(*)(::PVOID, ::RPG::GameCore::DOFCocMethodType))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_776F330B7D6C7E4A_OFFSET))(this, a1);
	}

	::RPG::GameCore::DOFCocMethodType Method_2_1A23D17D80D479D2(::RPG::CustomRP::RPGDepthOfField_CoCMethod a1)
	{
		return ((::RPG::GameCore::DOFCocMethodType(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField_CoCMethod))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_1A23D17D80D479D2_OFFSET))(this, a1);
	}
};
