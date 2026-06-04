#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F064940CC10176D1;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x136F5600)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x136F51E0)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x136F5130)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136F5580)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_48A730878298E8F8_OFFSET UNITYSDK_OFFSET(0x136F6400)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x136F6160)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x136F6360)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x136F5820)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_9F59C088ACADFAC2_OFFSET UNITYSDK_OFFSET(0x136F5C30)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x136F5260)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136F5940)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x136F6770)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x136F5980)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x136F5750)
#define CLASS_2_BE63AC97B8D8DE59_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x136F5680)
#define CLASS_2_BE63AC97B8D8DE59__CTOR_1_OFFSET UNITYSDK_OFFSET(0x136F5100)
#define CLASS_2_BE63AC97B8D8DE59__CTOR_OFFSET UNITYSDK_OFFSET(0x136F50F0)

inline static constexpr unsigned int Class_2_BE63AC97B8D8DE59_TypeDefinitionIndex = 65115;

class Class_2_BE63AC97B8D8DE59 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Class_1_F064940CC10176D1* Field_2_0; // 0x38
	::System::Single Field_2_1; // 0x40
	::System::Single Field_2_2; // 0x44
	::System::Single Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_F064940CC10176D1* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_F064940CC10176D1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_9F59C088ACADFAC2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_9F59C088ACADFAC2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_4AB9012B5D01108B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_2_48A730878298E8F8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_48A730878298E8F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_BE63AC97B8D8DE59_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
