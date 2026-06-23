#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_FA1CE876CD14A14A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A823C60)
#define CLASS_3_FA1CE876CD14A14A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A8240B0)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1A823CC0)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1A8244B0)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1A823EA0)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1A824130)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1A824350)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1A823F40)
#define CLASS_3_FA1CE876CD14A14A_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1A824040)
#define CLASS_3_FA1CE876CD14A14A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A824340)

inline static constexpr unsigned int Class_3_FA1CE876CD14A14A_TypeDefinitionIndex = 75210;

class Class_3_FA1CE876CD14A14A : public ::Class_2_828B2711AF58BA0B
{
public:
	::System::String* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_FA1CE876CD14A14A* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_FA1CE876CD14A14A*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_3_FA1CE876CD14A14A* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_FA1CE876CD14A14A*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FA1CE876CD14A14A_METHOD_3_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
