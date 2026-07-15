#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Object.h"

class Class_1_3DB4F2939925691A_Class_1_EE0E9B473B50A225;
namespace RPG::Client { class CameraModuleConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_3DB4F2939925691A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152FB6F0)
#define CLASS_1_3DB4F2939925691A_METHOD_1_363C564447EB5FE2_OFFSET UNITYSDK_OFFSET(0x152FB8C0)
#define CLASS_1_3DB4F2939925691A_METHOD_1_542C2389412D9EAF_OFFSET UNITYSDK_OFFSET(0x152FBAA0)
#define CLASS_1_3DB4F2939925691A_METHOD_1_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x152FBEB0)
#define CLASS_1_3DB4F2939925691A_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x152FBB60)
#define CLASS_1_3DB4F2939925691A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x152FBE20)
#define CLASS_1_3DB4F2939925691A__CTOR_OFFSET UNITYSDK_OFFSET(0x152FB5E0)

inline static constexpr unsigned int Class_1_3DB4F2939925691A_TypeDefinitionIndex = 66542;

class Class_1_3DB4F2939925691A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CameraModuleType, ::Class_1_3DB4F2939925691A_Class_1_EE0E9B473B50A225*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_363C564447EB5FE2(::RPG::Client::CameraModuleType a1, ::RPG::Client::CameraModuleConfigBase* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraModuleType, ::RPG::Client::CameraModuleConfigBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_METHOD_1_363C564447EB5FE2_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::CameraModuleConfigBase* Method_1_542C2389412D9EAF(::RPG::Client::CameraModuleType a1)
	{
		return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_METHOD_1_542C2389412D9EAF_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_METHOD_1_5739CCCE693D1FCB_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DB4F2939925691A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
