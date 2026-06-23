#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace System { class String; }

#define CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET UNITYSDK_OFFSET(0x1E87C500)
#define CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET UNITYSDK_OFFSET(0x1E87C3A0)
#define CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET UNITYSDK_OFFSET(0x1E87C460)

namespace CriWare
{
	inline static constexpr unsigned int CriFsUtility_TypeDefinitionIndex = 34321;

	class CriFsUtility : public ::System::Object
	{
	public:
		static ::CriWare::CriFsLoadFileRequest* LoadFile(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::CriWare::CriFsLoadFileRequest*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_LOADFILE_OFFSET))(binder, path, readUnitSize);
		}

		static ::System::Void SetUserAgentString(::System::String* userAgentString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_SETUSERAGENTSTRING_OFFSET))(userAgentString);
		}

		static ::System::Boolean CRIWARECD0DC04A(::System::String* userAgentString)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSUTILITY_CRIWARECD0DC04A_OFFSET))(userAgentString);
		}
	};
}
