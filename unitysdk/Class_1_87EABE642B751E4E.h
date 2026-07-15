#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FuncUnlockData; }
namespace RPG::GameCore { class FunctionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_87EABE642B751E4E_METHOD_1_757172F0BF472799_OFFSET UNITYSDK_OFFSET(0x17089EB0)
#define CLASS_1_87EABE642B751E4E_METHOD_1_A76A07E68FFF9CDC_1_OFFSET UNITYSDK_OFFSET(0x17089E00)
#define CLASS_1_87EABE642B751E4E_METHOD_1_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0x17089D50)
#define CLASS_1_87EABE642B751E4E_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x17089D00)
#define CLASS_1_87EABE642B751E4E_METHOD_1_BF5C59025A13AA03_OFFSET UNITYSDK_OFFSET(0x17089F60)
#define CLASS_1_87EABE642B751E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x17089FD0)

inline static constexpr unsigned int Class_1_87EABE642B751E4E_TypeDefinitionIndex = 65007;

class Class_1_87EABE642B751E4E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::RPG::GameCore::FunctionConfigRow* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E_METHOD_1_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::System::UInt32 Method_1_A76A07E68FFF9CDC_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E_METHOD_1_A76A07E68FFF9CDC_1_OFFSET))(this);
	}

	::RPG::Client::FuncUnlockData* Method_1_757172F0BF472799()
	{
		return ((::RPG::Client::FuncUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E_METHOD_1_757172F0BF472799_OFFSET))(this);
	}

	static ::Class_1_87EABE642B751E4E* Method_1_BF5C59025A13AA03(::RPG::GameCore::FunctionConfigRow* a1)
	{
		return ((::Class_1_87EABE642B751E4E*(*)(::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_87EABE642B751E4E_METHOD_1_BF5C59025A13AA03_OFFSET))(a1);
	}
};
