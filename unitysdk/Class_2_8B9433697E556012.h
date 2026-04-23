#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/CustomRP/RPGDepthOfField_CoCMethod.h"
#include "unitysdk/RPG/GameCore/DOFCocMethodType.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class UIMeta; }

#define CLASS_2_8B9433697E556012_METHOD_2_1A23D17D80D479D2_OFFSET UNITYSDK_OFFSET(0x118DC660)
#define CLASS_2_8B9433697E556012_METHOD_2_25097533E39B4213_OFFSET UNITYSDK_OFFSET(0x118DC240)
#define CLASS_2_8B9433697E556012_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x118DBBC0)
#define CLASS_2_8B9433697E556012_METHOD_2_393658FDCD0E8AB6_OFFSET UNITYSDK_OFFSET(0x118DC3E0)
#define CLASS_2_8B9433697E556012_METHOD_2_776F330B7D6C7E4A_OFFSET UNITYSDK_OFFSET(0x118DC540)
#define CLASS_2_8B9433697E556012_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x118DBC70)
#define CLASS_2_8B9433697E556012_METHOD_2_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x118DC5E0)
#define CLASS_2_8B9433697E556012_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x118DC700)
#define CLASS_2_8B9433697E556012_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x118DBCF0)
#define CLASS_2_8B9433697E556012_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x118DBD30)
#define CLASS_2_8B9433697E556012__CTOR_1_OFFSET UNITYSDK_OFFSET(0x118DBB90)
#define CLASS_2_8B9433697E556012__CTOR_OFFSET UNITYSDK_OFFSET(0x118DBB80)

inline static constexpr unsigned int Class_2_8B9433697E556012_TypeDefinitionIndex = 64159;

class Class_2_8B9433697E556012 : public ::Class_1_5B0B78CFE6F65A6A
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

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Boolean Method_2_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_393658FDCD0E8AB6(::RPG::Client::CameraDataAndFlags*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*&))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_393658FDCD0E8AB6_OFFSET))(this, a1);
	}

	::System::Void Method_2_25097533E39B4213(::RPG::Client::CameraDataAndFlags*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*&))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_25097533E39B4213_OFFSET))(this, a1);
	}

	::RPG::CustomRP::RPGDepthOfField_CoCMethod Method_2_776F330B7D6C7E4A(::RPG::GameCore::DOFCocMethodType a1)
	{
		return ((::RPG::CustomRP::RPGDepthOfField_CoCMethod(*)(::PVOID, ::RPG::GameCore::DOFCocMethodType))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_776F330B7D6C7E4A_OFFSET))(this, a1);
	}

	::RPG::GameCore::DOFCocMethodType Method_2_1A23D17D80D479D2(::RPG::CustomRP::RPGDepthOfField_CoCMethod a1)
	{
		return ((::RPG::GameCore::DOFCocMethodType(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField_CoCMethod))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_1A23D17D80D479D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_8B9433697E556012_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
