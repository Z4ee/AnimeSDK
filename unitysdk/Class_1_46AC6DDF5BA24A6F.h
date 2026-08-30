#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_680;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_AEA0006661D84E3E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_1_OFFSET UNITYSDK_OFFSET(0x16CCCC50)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0x16CCCBD0)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_6A9517B84DC0B513_OFFSET UNITYSDK_OFFSET(0x16CCCCD0)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_934E0B6B8222AA0A_OFFSET UNITYSDK_OFFSET(0x16CCCA10)
#define CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCC9F0)

inline static constexpr unsigned int Class_1_46AC6DDF5BA24A6F_TypeDefinitionIndex = 79900;

class Class_1_46AC6DDF5BA24A6F : public ::System::Object
{
public:
	::Class_1_AEA0006661D84E3E* LIIFJAEMFDP; // 0x10
	::RPG::Client::FateRin::Logging::ILoggerFactory* DADFMAKONCJ; // 0x18
	::Class_1_7D46F1066EF90FA6_3* CKHDGEHELHN; // 0x20
	::Class_0_16E4307DCC419505_680* MOHKEEEHFOB; // 0x28

	::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1, ::Class_1_AEA0006661D84E3E* a2, ::Class_0_16E4307DCC419505_680* a3, ::RPG::Client::FateRin::Logging::ILoggerFactory* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_AEA0006661D84E3E*, ::Class_0_16E4307DCC419505_680*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_934E0B6B8222AA0A(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F_METHOD_1_934E0B6B8222AA0A_OFFSET))(this, a1);
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
