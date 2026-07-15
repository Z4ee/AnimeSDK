#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightOrbConfigRow; }
namespace RPG::GameCore { class GridFightOrbTypeRow; }
namespace System { class String; }

#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_6CE32AE220FB84AF_OFFSET UNITYSDK_OFFSET(0x15FCE460)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15FCE4B0)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_9FAACC7749D268F3_OFFSET UNITYSDK_OFFSET(0x15FCE3A0)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x15FCE220)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x15FCE410)
#define CLASS_1_3778ED0D1EBF18B3_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15FCE350)
#define CLASS_1_3778ED0D1EBF18B3__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCE300)

inline static constexpr unsigned int Class_1_3778ED0D1EBF18B3_TypeDefinitionIndex = 61513;

class Class_1_3778ED0D1EBF18B3 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightOrbConfigRow* Field_1_0; // 0x10
	::RPG::GameCore::GridFightOrbTypeRow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::GridFightOrbConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_3778ED0D1EBF18B3* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_3778ED0D1EBF18B3*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_A917AC671DF6CB2D_OFFSET))(a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_9FAACC7749D268F3()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_9FAACC7749D268F3_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::RPG::GameCore::GridFightOrbType Method_1_6CE32AE220FB84AF()
	{
		return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_6CE32AE220FB84AF_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3778ED0D1EBF18B3_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
