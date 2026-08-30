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

#define CLASS_2_8B9433697E556012_METHOD_2_1A23D17D80D479D2_OFFSET UNITYSDK_OFFSET(0xBE8AA30)
#define CLASS_2_8B9433697E556012_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0xBE89BC0)
#define CLASS_2_8B9433697E556012_METHOD_2_776F330B7D6C7E4A_OFFSET UNITYSDK_OFFSET(0xBE8A910)
#define CLASS_2_8B9433697E556012_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBE89C70)
#define CLASS_2_8B9433697E556012_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0xBE8A9B0)
#define CLASS_2_8B9433697E556012_METHOD_2_C46E88E4855259D7_OFFSET UNITYSDK_OFFSET(0xBE8A300)
#define CLASS_2_8B9433697E556012_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBE89CF0)
#define CLASS_2_8B9433697E556012_METHOD_2_DB8E82518DAE405C_OFFSET UNITYSDK_OFFSET(0xBE8A6A0)
#define CLASS_2_8B9433697E556012_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xBE89D30)
#define CLASS_2_8B9433697E556012__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE89A60)
#define CLASS_2_8B9433697E556012__CTOR_OFFSET UNITYSDK_OFFSET(0xBE89A50)

inline static constexpr unsigned int Class_2_8B9433697E556012_TypeDefinitionIndex = 69578;

class Class_2_8B9433697E556012 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::RPG::Client::UIMeta* LHCIIAFFHCO; // 0x38
	::Struct_2_CB7D37A2987B484B BDBOGJHLEIG; // 0x40

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
