#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ImgTextParserBase; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_IMGTEXTPARSERBASE_CLASS_1_121FD646E893BFAA_METHOD_1_3249389B928082B9_OFFSET UNITYSDK_OFFSET(0x10E221E0)
#define MOLEMOLE_IMGTEXTPARSERBASE_CLASS_1_121FD646E893BFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x10E221D0)

namespace MoleMole
{
	inline static constexpr unsigned int ImgTextParserBase_Class_1_121FD646E893BFAA_TypeDefinitionIndex = 39759;

	class ImgTextParserBase_Class_1_121FD646E893BFAA : public ::System::Object
	{
	public:
		::MoleMole::ImgTextParserBase* Field_1_1; // 0x10
		::System::Func_1<::System::String*>* Field_1_0; // 0x18
		::System::Boolean Field_1_2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_CLASS_1_121FD646E893BFAA__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_3249389B928082B9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMGTEXTPARSERBASE_CLASS_1_121FD646E893BFAA_METHOD_1_3249389B928082B9_OFFSET))(this);
		}
	};
}
