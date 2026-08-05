#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_UpdateCommand_TypeDefinitionIndex = 6873;

	enum class ZipFile_UpdateCommand : ::System::Int32
	{
		Copy = 0,
		Modify = 1,
		Add = 2,
	};
}
