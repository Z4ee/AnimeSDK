#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_1_DD62B922D9C7B62B;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F77CE5EECE553125_METHOD_1_043757E685D9C7D5_OFFSET UNITYSDK_OFFSET(0x1601F560)
#define CLASS_1_F77CE5EECE553125__CTOR_OFFSET UNITYSDK_OFFSET(0x1601F210)

inline static constexpr unsigned int Class_1_F77CE5EECE553125_TypeDefinitionIndex = 79767;

class Class_1_F77CE5EECE553125 : public ::System::Object
{
public:
	::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinHouguOwnerType, ::Class_1_DD62B922D9C7B62B*>* BMBPOHCIMBD; // 0x18

	::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + CLASS_1_F77CE5EECE553125__CTOR_OFFSET))(this, a1);
	}

	::Class_1_DD62B922D9C7B62B* Method_1_043757E685D9C7D5(::RPG::GameCore::FateRinHouguOwnerType a1)
	{
		return ((::Class_1_DD62B922D9C7B62B*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + CLASS_1_F77CE5EECE553125_METHOD_1_043757E685D9C7D5_OFFSET))(this, a1);
	}
};
