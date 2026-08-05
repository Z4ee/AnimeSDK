#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BD3EF046502B972.h"
#include "unitysdk/Class_2_30FF6C32131138CF_Struct_2_FD8E1D4014EE315F_9.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

#define CLASS_2_30FF6C32131138CF_METHOD_2_36CF73FFAA70D812_OFFSET UNITYSDK_OFFSET(0x150355E0)
#define CLASS_2_30FF6C32131138CF_METHOD_2_6FE1E2C3B4ABDC6D_OFFSET UNITYSDK_OFFSET(0x15034FC0)
#define CLASS_2_30FF6C32131138CF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15034A40)
#define CLASS_2_30FF6C32131138CF__CTOR_OFFSET UNITYSDK_OFFSET(0x15034940)

inline static constexpr unsigned int Class_2_30FF6C32131138CF_TypeDefinitionIndex = 74843;

class Class_2_30FF6C32131138CF : public ::Class_1_5BD3EF046502B972
{
public:
	::Il2CppArray<::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom>* Field_2_1; // 0x20
	::Il2CppArray<::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom>* Field_2_0; // 0x28
	::Il2CppArray<::System::Single>* Field_2_2; // 0x30

	::System::Void _ctor(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a1, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a2, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a3, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a4, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a5, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom))((::PBYTE)hIl2Cpp + CLASS_2_30FF6C32131138CF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void _ctor_1(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a1, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a2, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a3, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a4, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a5, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_30FF6C32131138CF__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::MoleMole::UICameraAtom Method_2_6FE1E2C3B4ABDC6D(::System::Single a1, ::System::Single a2, ::MoleMole::UICameraAtom a3)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_2_30FF6C32131138CF_METHOD_2_6FE1E2C3B4ABDC6D_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_2_36CF73FFAA70D812(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom a1, ::System::Single& a2, ::Class_2_30FF6C32131138CF_Struct_2_FD8E1D4014EE315F_9& a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom, ::System::Single&, ::Class_2_30FF6C32131138CF_Struct_2_FD8E1D4014EE315F_9&))((::PBYTE)hIl2Cpp + CLASS_2_30FF6C32131138CF_METHOD_2_36CF73FFAA70D812_OFFSET))(a1, a2, a3);
	}
};
