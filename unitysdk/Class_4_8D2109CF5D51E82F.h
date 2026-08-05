#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_65C2BD0D1B91C740.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigCurveCtrlMatColorNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x128A2A90)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x128A2760)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_7E1E8D4D4624B158_OFFSET UNITYSDK_OFFSET(0x128A2380)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x128A22D0)
#define CLASS_4_8D2109CF5D51E82F_METHOD_4_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x128A27C0)
#define CLASS_4_8D2109CF5D51E82F__CTOR_OFFSET UNITYSDK_OFFSET(0x128A2A80)

inline static constexpr unsigned int Class_4_8D2109CF5D51E82F_TypeDefinitionIndex = 89400;

class Class_4_8D2109CF5D51E82F : public ::Class_3_65C2BD0D1B91C740
{
public:
	::System::String* Field_4_6; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* Field_4_7; // 0x50
	::MoleMole::Config::ConfigCurveCtrlMatColorNode* Field_4_0; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Color>* Field_4_11; // 0x60
	::UnityEngine::Color Field_4_5; // 0x68
	::System::Boolean Field_4_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_7E1E8D4D4624B158()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_7E1E8D4D4624B158_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_4_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::Void Method_4_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8D2109CF5D51E82F_METHOD_4_4343F372F34C05BF_1_OFFSET))(this);
	}
};
