#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_772;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_AEA0006661D84E3E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_1_OFFSET UNITYSDK_OFFSET(0xB65E830)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0xB65E7B0)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_6A9517B84DC0B513_OFFSET UNITYSDK_OFFSET(0xB65E8B0)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_75B51D8F2DF425B9_OFFSET UNITYSDK_OFFSET(0xB65E5F0)
#define CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET UNITYSDK_OFFSET(0xB65E5D0)

inline static constexpr unsigned int Class_1_46AC6DDF5BA24A6F_TypeDefinitionIndex = 81225;

class Class_1_46AC6DDF5BA24A6F : public ::System::Object
{
public:
	::Class_1_AEA0006661D84E3E* LIIFJAEMFDP; // 0x10
	::Class_1_7D46F1066EF90FA6_3* CKHDGEHELHN; // 0x18
	::RPG::Client::FateRin::Logging::ILoggerFactory* DADFMAKONCJ; // 0x20
	::Class_0_16E4307DCC419505_772* MOHKEEEHFOB; // 0x28

	::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1, ::Class_1_AEA0006661D84E3E* a2, ::Class_0_16E4307DCC419505_772* a3, ::RPG::Client::FateRin::Logging::ILoggerFactory* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_AEA0006661D84E3E*, ::Class_0_16E4307DCC419505_772*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_75B51D8F2DF425B9(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F_METHOD_1_75B51D8F2DF425B9_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_6A9517B84DC0B513(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F_METHOD_1_6A9517B84DC0B513_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_35DA77D0A6FF0B56(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_35DA77D0A6FF0B56_1(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_1_OFFSET))(this, a1);
	}
};
