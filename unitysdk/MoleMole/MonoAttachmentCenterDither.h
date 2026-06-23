#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x126282C0)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x12628340)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x12628960)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x12628400)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x12628760)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x126283B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAttachmentCenterDither_TypeDefinitionIndex = 57145;

	class MonoAttachmentCenterDither : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean IsOpen; // 0x19
		::UnityEngine::Transform* CenterTrans; // 0x20
		::System::Single Range; // 0x28
		::System::Single Fade; // 0x2C
		::System::Single CenterMinAlpha; // 0x30
		::System::Boolean Field_5_6; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_7; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_870AF3CD1D0A67B1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_870AF3CD1D0A67B1_OFFSET))(this);
		}

		::System::Void Method_5_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_39FD7185C859CEAD_OFFSET))(this);
		}

		::System::Void Method_5_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_8F7825DAFFB9B517_OFFSET))(this);
		}

		::System::Void Method_5_0869E1192F8E01DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_METHOD_5_0869E1192F8E01DF_OFFSET))(this);
		}
	};
}
