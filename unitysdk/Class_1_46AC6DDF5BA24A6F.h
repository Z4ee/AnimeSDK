#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_641;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_9E840E2FFD45BB99;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_1_OFFSET UNITYSDK_OFFSET(0x1527B990)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_35DA77D0A6FF0B56_OFFSET UNITYSDK_OFFSET(0x1527B910)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_6A9517B84DC0B513_OFFSET UNITYSDK_OFFSET(0x1527BA10)
#define CLASS_1_46AC6DDF5BA24A6F_METHOD_1_934E0B6B8222AA0A_OFFSET UNITYSDK_OFFSET(0x1527B750)
#define CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1527B730)

inline static constexpr unsigned int Class_1_46AC6DDF5BA24A6F_TypeDefinitionIndex = 76267;

class Class_1_46AC6DDF5BA24A6F : public ::System::Object
{
public:
	::Class_1_9E840E2FFD45BB99* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_641* Field_1_1; // 0x18
	::Class_1_7D46F1066EF90FA6_3* Field_1_2; // 0x20
	::RPG::Client::FateRin::Logging::ILoggerFactory* Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1, ::Class_1_9E840E2FFD45BB99* a2, ::Class_0_16E4307DCC419505_641* a3, ::RPG::Client::FateRin::Logging::ILoggerFactory* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*, ::Class_1_9E840E2FFD45BB99*, ::Class_0_16E4307DCC419505_641*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_46AC6DDF5BA24A6F__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
