#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }

#define CLASS_2_CFBCA19F1D27E75F_METHOD_2_1C5535C4F99002A8_OFFSET UNITYSDK_OFFSET(0x8742620)
#define CLASS_2_CFBCA19F1D27E75F__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8742580)
#define CLASS_2_CFBCA19F1D27E75F__CTOR_OFFSET UNITYSDK_OFFSET(0x87426B0)
#define CLASS_2_CFBCA19F1D27E75F___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x87426D0)

inline static constexpr unsigned int Class_2_CFBCA19F1D27E75F_TypeDefinitionIndex = 51587;

class Class_2_CFBCA19F1D27E75F : public ::RPG::Client::BaseModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBCA19F1D27E75F__CTOR_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBCA19F1D27E75F__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_1C5535C4F99002A8(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CFBCA19F1D27E75F_METHOD_2_1C5535C4F99002A8_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBCA19F1D27E75F___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};
