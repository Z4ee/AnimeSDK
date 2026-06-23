#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoDestructionObject_Enum_3_47EA880E4C799732.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

class Class_2_208CC9941471731A_1118;
class Class_2_F8EB4D9464ADCCA1;

#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET UNITYSDK_OFFSET(0x17E8DA40)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET UNITYSDK_OFFSET(0x17E8D870)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET UNITYSDK_OFFSET(0x17E8D9D0)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_METHOD_7_C7E9B8BFC4E12591_OFFSET UNITYSDK_OFFSET(0x17E8D940)
#define MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E8DAB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDestructionObject_TypeDefinitionIndex = 69185;

	class MonoDestructionObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 _templateID; // 0x28
		::MoleMole::MonoDestructionObject_Enum_3_47EA880E4C799732 _idType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetSubID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_1118* GetSubTemplate()
		{
			return ((::Class_2_208CC9941471731A_1118*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET))(this);
		}

		::Class_2_F8EB4D9464ADCCA1* GetBaseTemplate()
		{
			return ((::Class_2_F8EB4D9464ADCCA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET))(this);
		}

		static ::System::Int32 Method_7_C7E9B8BFC4E12591(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_METHOD_7_C7E9B8BFC4E12591_OFFSET))(a1);
		}
	};
}
