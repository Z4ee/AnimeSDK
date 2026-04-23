#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class AttachmentBone; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_10E3199645FD9D0C_OFFSET UNITYSDK_OFFSET(0x9D48FB0)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x9D49210)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_3F8DC0E62FBF27F8_OFFSET UNITYSDK_OFFSET(0x9D495A0)
#define RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9D49AC0)
#define RPG_CLIENT_ATTACHMENTSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D49B00)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachmentSolver_TypeDefinitionIndex = 63106;

	class AttachmentSolver : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachmentBone*>* Attachments; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _RelativeMatrix; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_10E3199645FD9D0C(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_10E3199645FD9D0C_OFFSET))(this, a1);
		}

		::System::Void Method_1_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Void Method_1_3F8DC0E62FBF27F8(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_3F8DC0E62FBF27F8_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
