#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Foundation/AssetPath.h"

class Class_2_8E938CB3775CAF5D;
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_E30C67D1E1D0C149_METHOD_2_0D771ED379BBF670_OFFSET UNITYSDK_OFFSET(0x140C4380)
#define CLASS_2_E30C67D1E1D0C149_METHOD_2_1DCCC1086DB7F75B_OFFSET UNITYSDK_OFFSET(0x11410AB0)
#define CLASS_2_E30C67D1E1D0C149_METHOD_2_94CBA6463DEF671A_OFFSET UNITYSDK_OFFSET(0x11410500)
#define CLASS_2_E30C67D1E1D0C149_METHOD_2_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x11410BB0)
#define CLASS_2_E30C67D1E1D0C149_METHOD_2_C52E05147903D282_OFFSET UNITYSDK_OFFSET(0x11410780)
#define CLASS_2_E30C67D1E1D0C149_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x140C4190)
#define CLASS_2_E30C67D1E1D0C149__CTOR_OFFSET UNITYSDK_OFFSET(0x140C4370)

inline static constexpr unsigned int Class_2_E30C67D1E1D0C149_TypeDefinitionIndex = 64629;

class Class_2_E30C67D1E1D0C149 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_2_F16D73323D71766B<::System::Int32>* Field_2_7; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_2; // 0x88
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x90
	::Class_0_16E4307DCC419505_159<::Class_2_8E938CB3775CAF5D*>* Field_2_0; // 0x98
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_4; // 0xA0
	::Class_2_F16D73323D71766B<::Foundation::AssetPath>* Field_2_6; // 0xA8
	::Class_2_F16D73323D71766B<::System::Boolean>* Field_2_5; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean Method_2_0D771ED379BBF670()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_METHOD_2_0D771ED379BBF670_OFFSET))(this);
	}

	::System::Void Method_2_94CBA6463DEF671A(::Class_2_8E938CB3775CAF5D* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8E938CB3775CAF5D*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_METHOD_2_94CBA6463DEF671A_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C52E05147903D282()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_METHOD_2_C52E05147903D282_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_1DCCC1086DB7F75B()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_METHOD_2_1DCCC1086DB7F75B_OFFSET))(this);
	}

	::System::Boolean Method_2_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E30C67D1E1D0C149_METHOD_2_9C72894CB5D45A5A_OFFSET))(this);
	}
};
