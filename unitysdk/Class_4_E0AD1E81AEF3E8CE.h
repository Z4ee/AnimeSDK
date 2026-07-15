#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_AC01FCB2512C56A9.h"
#include "unitysdk/Class_4_E0AD1E81AEF3E8CE_BossDotStyle.h"

class Class_1_70697F531F566942_2;
class Class_2_005C88D64E39C63B;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x17EA4F10)
#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_5068F669523739DA_OFFSET UNITYSDK_OFFSET(0x17EA49D0)
#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17EA4BC0)
#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x17EA4DC0)
#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17EA4F70)
#define CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x17EA4B70)
#define CLASS_4_E0AD1E81AEF3E8CE__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA5010)
#define CLASS_4_E0AD1E81AEF3E8CE__ONBIND_OFFSET UNITYSDK_OFFSET(0x17EA47A0)

inline static constexpr unsigned int Class_4_E0AD1E81AEF3E8CE_TypeDefinitionIndex = 68374;

class Class_4_E0AD1E81AEF3E8CE : public ::Class_3_AC01FCB2512C56A9
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	// static const ::System::String* Field_4_1; // 0x0
	// static const ::System::String* Field_4_2; // 0x0
	// static const ::System::String* Field_4_3; // 0x0
	::UnityEngine::Transform* Field_4_4; // 0x150
	::UnityEngine::Transform* Field_4_5; // 0x158
	::Class_2_005C88D64E39C63B* Field_4_6; // 0x160
	::UnityEngine::Transform* Field_4_7; // 0x168
	::System::Int32 Field_4_8; // 0x170
	::System::Int32 Field_4_9; // 0x174
	::Class_4_E0AD1E81AEF3E8CE_BossDotStyle Field_4_10; // 0x178
	::System::Int32 Field_4_11; // 0x17C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_5068F669523739DA(::Class_1_70697F531F566942_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_2*))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_5068F669523739DA_OFFSET))(this, a1);
	}

	::System::Void Method_4_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_4_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_4_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_4_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_4_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E0AD1E81AEF3E8CE_METHOD_4_078D85152011B919_OFFSET))(this);
	}
};
