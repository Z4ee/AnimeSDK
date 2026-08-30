#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_64C35DBC625ACD9D.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"

namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_97011BAC05FA9898_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE883450)
#define CLASS_3_97011BAC05FA9898_METHOD_3_70E9BA2D1A0D1EBD_OFFSET UNITYSDK_OFFSET(0xE883830)
#define CLASS_3_97011BAC05FA9898_METHOD_3_D28541E034DE09EA_OFFSET UNITYSDK_OFFSET(0xE883560)
#define CLASS_3_97011BAC05FA9898_METHOD_3_FB741FB5C48508A1_OFFSET UNITYSDK_OFFSET(0xE8837A0)
#define CLASS_3_97011BAC05FA9898__CTOR_OFFSET UNITYSDK_OFFSET(0xE8838C0)

inline static constexpr unsigned int Class_3_97011BAC05FA9898_TypeDefinitionIndex = 69406;

class Class_3_97011BAC05FA9898 : public ::Class_2_64C35DBC625ACD9D
{
public:
	::RPG::Client::PhotoGraphTag GEDHIHNLNCG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97011BAC05FA9898__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97011BAC05FA9898_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_D28541E034DE09EA(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_97011BAC05FA9898_METHOD_3_D28541E034DE09EA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_FB741FB5C48508A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_97011BAC05FA9898_METHOD_3_FB741FB5C48508A1_OFFSET))(this, a1);
	}

	::System::Void Method_3_70E9BA2D1A0D1EBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_97011BAC05FA9898_METHOD_3_70E9BA2D1A0D1EBD_OFFSET))(this, a1);
	}
};
