#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ChatPlusDialogBehaviour; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_01FAE893E5F900C6_OFFSET UNITYSDK_OFFSET(0x19997290)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_19C80757D4D74851_OFFSET UNITYSDK_OFFSET(0x19997380)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_1FB70D28415DD975_OFFSET UNITYSDK_OFFSET(0x19997310)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogBehaviour_Class_1_F93C2B18E0102FFF_TypeDefinitionIndex = 40330;

	class ChatPlusDialogBehaviour_Class_1_F93C2B18E0102FFF : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::ChatPlusDialogBehaviour** StaticGet_Field_1_1()
		{
			return (::MoleMole::Timeline::ChatPlusDialogBehaviour**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusDialogBehaviour_Class_1_F93C2B18E0102FFF_TypeDefinitionIndex)->GetStaticField(0x51A00);
		}
		static ::System::UInt32* StaticGet_Field_1_0()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChatPlusDialogBehaviour_Class_1_F93C2B18E0102FFF_TypeDefinitionIndex)->GetStaticField(0x12DB0);
		}

		static ::System::Void Method_1_01FAE893E5F900C6(::MoleMole::Timeline::ChatPlusDialogBehaviour* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_01FAE893E5F900C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_1FB70D28415DD975(::MoleMole::Timeline::ChatPlusDialogBehaviour* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_1FB70D28415DD975_OFFSET))(a1, a2);
		}

		static ::System::Void Method_1_19C80757D4D74851(::MoleMole::Timeline::ChatPlusDialogBehaviour* a1)
		{
			return ((::System::Void(*)(::MoleMole::Timeline::ChatPlusDialogBehaviour*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGBEHAVIOUR_CLASS_1_F93C2B18E0102FFF_METHOD_1_19C80757D4D74851_OFFSET))(a1);
		}
	};
}
